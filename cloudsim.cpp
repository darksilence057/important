package examples;

import org.cloudbus.cloudsim.Cloudlet;
import org.cloudbus.cloudsim.UtilizationModelFull;

import java.util.*;

public class fcfs_sjf {

    public static void main(String[] args) {

        UtilizationModelFull utilization =
                new UtilizationModelFull();

        ArrayList<Cloudlet> list = new ArrayList<>();

        list.add(new Cloudlet(
                1, 4000, 1,
                300, 300,
                utilization,
                utilization,
                utilization));

        list.add(new Cloudlet(
                2, 2000, 1,
                300, 300,
                utilization,
                utilization,
                utilization));

        list.add(new Cloudlet(
                3, 6000, 1,
                300, 300,
                utilization,
                utilization,
                utilization));

        list.add(new Cloudlet(
                4, 1000, 1,
                300, 300,
                utilization,
                utilization,
                utilization));

        System.out.println("FCFS Scheduling");

        for (Cloudlet c : list) {

            System.out.println(
                    "Cloudlet ID: "
                            + c.getCloudletId()
                            + " Length: "
                            + c.getCloudletLength()
            );
        }

        System.out.println("\nSJF Scheduling");

        Collections.sort(list, new Comparator<Cloudlet>() {

            public int compare(Cloudlet a, Cloudlet b) {

                return (int)(a.getCloudletLength()
                        - b.getCloudletLength());
            }
        });

        for (Cloudlet c : list) {

            System.out.println(
                    "Cloudlet ID: "
                            + c.getCloudletId()
                            + " Length: "
                            + c.getCloudletLength()
            );
        }
    }
}

https://archive.apache.org/dist/commons/math/binaries/commons-math3-3.6.1-bin.zip?utm_source=chatgpt.com
download common math 3
https://code.google.com/archive/p/cloudsim/downloads?utm_source=chatgpt.com
download clousim 3.0.3 bin.zip

create java project inside eclipse or intellij
inside project structure libraries add common math.jar

create examples package inside src 
copy org folder inside cloudsim sources and right click on src and paste 
mark src as soruces root
create a java class inside examples fcfs_sjf
now paste the code inside fcfs_sjf and run