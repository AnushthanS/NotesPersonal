import java.util.Scanner;

class Employee{
    String name;
    String employeeId;
    float basicSalary;
    int allowancePercentage;
}

public class EmployeeRecordsMain{

    static Employee[] employees;
    public static void createEmployee(){
        Scanner scanner = new Scanner(System.in);
        employees = new Employee[5];
        for(int i = 0; i < 5; i++){
            employees[i] = new Employee();
            System.out.println("Enter name of Employee "+(i+1)+": ");
            employees[i].name = scanner.nextLine();

            System.out.println("Enter employee ID: ");
            employees[i].employeeId = scanner.nextLine();

            System.out.println("Enter the basic salary: ");
            employees[i].basicSalary = scanner.nextFloat();

            System.out.println("Enter allowance percentage: ");
            employees[i].allowancePercentage = scanner.nextInt();
            scanner.nextLine();
        }
    }

    public static Employee findEmployeeById(String ID){
        for(Employee e: employees){
            if(e.employeeId.compareTo(ID) == 0){
                return e;
            }
        }
        return null;
    }

    public static Employee findEmployeeByName(String name) {
        for (Employee e : employees) {
            if (e.name.compareTo(name) == 0) {
                return e;
            }
        }
        return null;
    }
    public static float findEmployeeSalary(Employee e){
        return e.basicSalary + (e.basicSalary * e.allowancePercentage);
    }

    public static void printEmployeeDetail(Employee e){
        System.out.printf("Name : %s\n", e.name);
        System.out.printf("Employee ID : %s\n", e.employeeId);
        System.out.printf("Basic Salary : %.2f\n", e.basicSalary);
        System.out.printf("Allowance Percentage : %d\n", e.allowancePercentage);
    }
    public static void main(String[] args){
        createEmployee();
        printEmployeeDetail(findEmployeeById("0027"));
        printEmployeeDetail(findEmployeeByName("Nikunj"));
        float sal = findEmployeeSalary(employees[2]);
        printEmployeeDetail(employees[2]);
        System.out.println("Salary : "+sal);
    }
}