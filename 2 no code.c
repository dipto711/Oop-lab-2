public class Book {
    private String title;
    private String author;
    private int year;
    private static String genre = "Fiction";
    private static int totalBooks = 0;


    public Book(String title, String author, int year) {
        this.title = title;
        this.author = author;
        this.year = year;
        totalBooks++;
    }


    public void displayDetails() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Year: " + year);
        System.out.println("Genre: " + genre);
    }


    public static void displayTotalBooks() {
        System.out.println("Total number of books: " + totalBooks);
    }

    public static void main(String[] args) {

        Book book1 = new Book("1984", "George Orwell", 1949);
        Book book2 = new Book("To Kill a Mockingbird", "Harper Lee", 1960);
        Book book3 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925);


        book1.displayDetails();
        System.out.println();
        book2.displayDetails();
        System.out.println();
        book3.displayDetails();
        System.out.println();


        Book.displayTotalBooks();
    }
}
