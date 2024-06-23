public class Employee {

    private static String companyName = "XYZ Corporation";
    private static String companyAddress = "123 Company Ave, Example City";
    private static int totalEmployees = 0;


    private String name;
    private int age;
    private String designation;
    private double salary;


    public Employee(String name, int age, String designation, double salary) {
        this.name = name;
        this.age = age;
        this.designation = designation;
        this.salary = salary;

        totalEmployees++;
    }


    public void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Designation: " + designation);
        System.out.println("Salary: $" + salary);
        System.out.println("Company: " + companyName);
        System.out.println("Address: " + companyAddress);
        System.out.println();
    }


    public static void displayTotalEmployees() {
        System.out.println("Total Employees: " + totalEmployees);
    }


    public static void main(String[] args) {

        Employee emp1 = new Employee("John Doe", 30, "Software Engineer", 75000);
        Employee emp2 = new Employee("Jane Smith", 28, "Product Manager", 95000);
        Employee emp3 = new Employee("Michael Johnson", 35, "Data Scientist", 85000);


        emp1.displayDetails();
        emp2.displayDetails();
        emp3.displayDetails();


        displayTotalEmployees();
    }
}
