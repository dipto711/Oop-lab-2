public class Student {
    private String id;
    private String name;
    private String department;
    private double cgpa;
    private static String university = "XYZ University";
    private static int totalStudents = 0;


    public Student(String id, String name, String department, double cgpa) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.cgpa = cgpa;
        totalStudents++;  // Increment the total student count
    }


    public void displayDetails() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("CGPA: " + cgpa);
        System.out.println("University: " + university);
    }


    public static void displayTotalStudents() {
        System.out.println("Total number of students: " + totalStudents);
    }

    public static void main(String[] args) {
        // Creating 3 student objects using the parameterized constructor
        Student student1 = new Student("S001", "Alice", "Computer Science", 3.8);
        Student student2 = new Student("S002", "Bob", "Electrical Engineering", 3.5);
        Student student3 = new Student("S003", "Charlie", "Mechanical Engineering", 3.7);


        student1.displayDetails();
        System.out.println();  // Blank line for better readability
        student2.displayDetails();
        System.out.println();  // Blank line for better readability
        student3.displayDetails();
        System.out.println();  // Blank line for better readability


        Student.displayTotalStudents();
    }
}
