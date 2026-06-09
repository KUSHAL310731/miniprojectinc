import java.util.Scanner;

class Employee {
    public String empName;
    public int empId;

    void getEmployeeDetails() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Employee Name:");
        empName = sc.nextLine();

        System.out.println("Enter Employee ID:");
        empId = sc.nextInt();
    }

    public static void main(String[] args) {
        Salary s = new Salary();

        s.getEmployeeDetails();
        s.getSalaryDetails();

        System.out.println("Employee Name: " + s.empName);
        System.out.println("Employee ID: " + s.empId);
        System.out.println("Salary: " + s.salary);
    }
}

class Salary extends Employee {
    public int salary;

    void getSalaryDetails() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Salary:");
        salary = sc.nextInt();
    }
}