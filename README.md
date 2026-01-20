# CPP
//vehicle
package com.vehicle.bean;

import java.io.Serializable;

public class Vehicle implements Comparable<Vehicle>, Serializable {

    private static final long serialVersionUID = 1L;

    protected int vehicleId;
    protected String vehicleName;
    protected double price;
    protected int stock;

    public Vehicle(int vehicleId, String vehicleName, double price, int stock) {
        this.vehicleId = vehicleId;
        this.vehicleName = vehicleName;
        this.price = price;
        this.stock = stock;
    }

    public int getVehicleId() {
        return vehicleId;
    }

    public int getStock() {
        return stock;
    }

    public void setStock(int stock) {
        this.stock = stock;
    }

   @Override
public String toString() {
    return vehicleId + " " + vehicleName + " " + price + " Stock:" + stock;
}


    @Override
    public int compareTo(Vehicle v) {
        return this.vehicleId - v.vehicleId;
    }
}


//2wheeler
package com.vehicle.bean;

public class TwoWheeler extends Vehicle {

    private String bikeType;

    public TwoWheeler(int id, String name, double price, int stock, String bikeType) {
        super(id, name, price, stock);
        this.bikeType = bikeType;
    }

   @Override
public String toString() {
    return super.toString() + " Type:" + bikeType;
}

}
//4wheel
package com.vehicle.bean;

public class FourWheeler extends Vehicle {

    private boolean hasAC;

    public FourWheeler(int id, String name, double price, int stock, boolean hasAC) {
        super(id, name, price, stock);
        this.hasAC = hasAC;
    }

    @Override
    public String toString() {
        return super.toString() + " AC:" + hasAC;
    }
}


//dao
package com.vehicle.dao;

import java.util.List;
import java.util.Set;
import com.vehicle.bean.Vehicle;

public interface VehicleDao {

    boolean save(Vehicle v);

    Set<Vehicle> findAll();

    Vehicle findById(int id);

    Set<Vehicle> findByName(String name);

    boolean removeByPrice(double price);

    boolean removeById(int id);

    boolean updateStock(int id, int qty);

    Set<Vehicle> sortById();

    List<Vehicle> sortByName();

    List<Vehicle> sortByPrice();
}

//daoimpl
package com.vehicle.dao.impl;

import java.io.*;
import java.util.*;

import com.vehicle.bean.Vehicle;
import com.vehicle.bean.TwoWheeler;
import com.vehicle.bean.FourWheeler;
import com.vehicle.dao.VehicleDao;

public class VehicleDaoImpl implements VehicleDao {

    private Set<Vehicle> vset;
    private final String FILE_NAME = "vehicles.dat";

    public VehicleDaoImpl() {
        vset = loadFromFile();
        if (vset == null) {
            vset = new HashSet<>();
            // Add some default vehicles
            vset.add(new TwoWheeler(101, "Activa", 85000, 10, "Non-Gear"));
            vset.add(new FourWheeler(103, "Swift", 700000, 5, true));
            vset.add(new TwoWheeler(102, "Pulsar", 120000, 7, "Gear"));
            saveToFile();
        }
    }

    @Override
    public boolean save(Vehicle v) {
        boolean added = vset.add(v);
        saveToFile();
        return added;
    }

    @Override
    public Set<Vehicle> findAll() {
        return vset;
    }

    @Override
    public Vehicle findById(int id) {
        for (Vehicle v : vset) {
            if (v.getVehicleId() == id) return v;
        }
        return null;
    }

    @Override
    public Set<Vehicle> findByName(String name) {
        Set<Vehicle> vs = new HashSet<>();
        for (Vehicle v : vset) {
            if (v.getVehicleName().equals(name)) vs.add(v);
        }
        return vs.size() > 0 ? vs : null;
    }

    @Override
    public boolean removeByPrice(double price) {
        boolean removed = vset.removeIf(v -> v.getPrice() > price);
        saveToFile();
        return removed;
    }

    @Override
    public boolean removeById(int id) {
        boolean removed = vset.remove(new Vehicle(id));
        saveToFile();
        return removed;
    }

    @Override
    public boolean updateStock(int id, int qty) {
        Vehicle v = findById(id);
        if (v != null) {
            v.setStock(v.getStock() - qty);
            saveToFile();
            return true;
        }
        return false;
    }

    @Override
    public Set<Vehicle> sortById() {
        Set<Vehicle> tset = new TreeSet<>();
        tset.addAll(vset);
        return tset;
    }

    @Override
    public List<Vehicle> sortByName() {
        List<Vehicle> vlist = new ArrayList<>(vset);
        vlist.sort(Comparator.comparing(Vehicle::getVehicleName));
        return vlist;
    }

    @Override
    public List<Vehicle> sortByPrice() {
        List<Vehicle> vlist = new ArrayList<>(vset);
        vlist.sort(Comparator.comparingDouble(Vehicle::getPrice));
        return vlist;
    }

    // ---------------- FILE HANDLING ----------------

    private void saveToFile() {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE_NAME))) {
            oos.writeObject(vset);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @SuppressWarnings("unchecked")
    private Set<Vehicle> loadFromFile() {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(FILE_NAME))) {
            return (Set<Vehicle>) ois.readObject();
        } catch (Exception e) {
            return null; // if file not found or error, return null
        }
    }
}




//service
package com.vehicle.service;

import java.util.List;
import java.util.Set;
import com.vehicle.bean.Vehicle;

public interface VehicleService {

    boolean addNewVehicle();

    Set<Vehicle> displayAll();

    Vehicle displayById(int id);

    Set<Vehicle> displayByName(String name);

    boolean deleteByPrice(double price);

    boolean deleteById(int id);

    boolean updateStock(int id, int qty);

    Set<Vehicle> sortById();

    List<Vehicle> sortByName();

    List<Vehicle> sortByPrice();
}




//servuceimpl
package com.vehicle.service.impl;

import java.util.List;
import java.util.Scanner;
import java.util.Set;

import com.vehicle.bean.Vehicle;
import com.vehicle.bean.TwoWheeler;
import com.vehicle.bean.FourWheeler;
import com.vehicle.dao.VehicleDao;
import com.vehicle.dao.impl.VehicleDaoImpl;
import com.vehicle.service.VehicleService;

public class VehicleServiceImpl implements VehicleService {

    private VehicleDao vdao;

    public VehicleServiceImpl() {
        super();
        this.vdao = new VehicleDaoImpl();
    }

    @Override
    public boolean addNewVehicle() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Vehicle Type (1-TwoWheeler / 2-FourWheeler): ");
        int type = sc.nextInt();

        System.out.println("Enter Vehicle Id: ");
        int id = sc.nextInt();

        System.out.println("Enter Vehicle Name: ");
        String name = sc.next();

        System.out.println("Enter Price: ");
        double price = sc.nextDouble();

        System.out.println("Enter Stock: ");
        int stock = sc.nextInt();

        Vehicle v = null;

        if (type == 1) {
            System.out.println("Enter Bike Type (Gear/Non-Gear): ");
            String bikeType = sc.next();
            v = new TwoWheeler(id, name, price, stock, bikeType);
        } else if (type == 2) {
            System.out.println("Has AC? (true/false): ");
            boolean ac = sc.nextBoolean();
            v = new FourWheeler(id, name, price, stock, ac);
        } else {
            System.out.println("Invalid Vehicle Type");
            return false;
        }

        return vdao.save(v);
    }

    @Override
    public Set<Vehicle> displayAll() {
        return vdao.findAll();
    }

    @Override
    public Vehicle displayById(int id) {
        return vdao.findById(id);
    }

    @Override
    public Set<Vehicle> displayByName(String name) {
        return vdao.findByName(name);
    }

    @Override
    public boolean deleteByPrice(double price) {
        return vdao.removeByPrice(price);
    }

    @Override
    public boolean deleteById(int id) {
        return vdao.removeById(id);
    }

    @Override
    public boolean updateStock(int id, int qty) {
        return vdao.updateStock(id, qty);
    }

    @Override
    public Set<Vehicle> sortById() {
        return vdao.sortById();
    }

    @Override
    public List<Vehicle> sortByName() {
        return vdao.sortByName();
    }

    @Override
    public List<Vehicle> sortByPrice() {
        return vdao.sortByPrice();
    }
}

//test
package com.vehicle.test;

import java.util.Scanner;
import com.vehicle.bean.Vehicle;
import com.vehicle.service.VehicleService;
import com.vehicle.service.impl.VehicleServiceImpl;

public class VehicleTest {

    public static void main(String[] args) {

        VehicleService service = new VehicleServiceImpl();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\n--- VEHICLE MENU ---");
            System.out.println("1. Add Vehicle");
            System.out.println("2. Display All");
            System.out.println("3. Display By Id");
            System.out.println("4. Display By Name");
            System.out.println("5. Delete By Price");
            System.out.println("6. Delete By Id");
            System.out.println("7. Update Stock");
            System.out.println("8. Sort By Id");
            System.out.println("9. Sort By Name");
            System.out.println("10. Sort By Price");
            System.out.println("0. Exit");
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    service.addNewVehicle();
                    break;
                case 2:
                    for (Vehicle v : service.displayAll())
                        for(Vehicle v : vehicles) {
                            System.out.println(v);
                    }

                    break;
                case 3:
                   case 3:
                    System.out.print("Enter Vehicle Id: ");
                    int id = sc.nextInt();
                    Vehicle v = service.displayById(id);
                    if (v != null)
                    System.out.println(v); // toString()
                    else
                    System.out.println("Vehicle not found");
                    break;

                case 4:
                    System.out.print("Enter Vehicle Name: ");
                    String name = sc.next();
                    for (Vehicle v : service.displayByName(name))
                        System.out.println(v.getDetails());
                    break;
                case 5:
                    System.out.print("Enter Price: ");
                    double price = sc.nextDouble();
                    service.deleteByPrice(price);
                    break;
                case 6:
                    System.out.print("Enter Vehicle Id: ");
                    int did = sc.nextInt();
                    service.deleteById(did);
                    break;
                case 7:
                    System.out.print("Enter Vehicle Id: ");
                    int uid = sc.nextInt();
                    System.out.print("Enter Qty Sold: ");
                    int qty = sc.nextInt();
                    service.updateStock(uid, qty);
                    break;
                case 8:
                    for (Vehicle v : service.sortById())
                        System.out.println(v.getDetails());
                    break;
                case 9:
                    for (Vehicle v : service.sortByName())
                        System.out.println(v.getDetails());
                    break;
                case 10:
                    for (Vehicle v : service.sortByPrice())
                        System.out.println(v.getDetails());
                    break;
                case 0:
                    System.out.println("Thank You");
                    break;
                default:
                    System.out.println("Invalid Choice");
            }

        } while (choice != 0);

        sc.close();
    }
}
