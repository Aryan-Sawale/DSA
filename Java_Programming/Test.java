import java.io.*;
import java.util.*;

class Car {
  String brand;
  int year;

  Car(String brand, int year) {
    this.brand = brand;
    this.year = year;
  }

  void display() {
    System.out.println("Car brand: " + brand + ", Year: " + year);
  }
}

class Vehicle {
  void display() {
    System.out.println("Vehicle");
  }

  void Vehicle_func() {
    System.out.println("Vehicle Function");
  }
}

class Car2 extends Vehicle {
  void display() {
    System.out.println("Car");
  }
}

public class Test {
  public static void main(String[] args) {
    // basics
    System.out.println("Hello World! " + 88 + " sj");

    // data types
    int number = 10;
    double pi = 3.14;
    String firstName = "Alice";
    boolean isTrue = true;
    char initial = 'A';

    // control flow
    int x = 10;
    if (x > 5) {
      System.out.println("x is greater than 5");
    } else {
      System.out.println("x is less than or equal to 5");
    }

    for (int i = 0; i < 5; i++) {
      System.out.println("Iteration: " + i);
    }

    while (x > 0) {
      System.out.println("Value of x: " + x);
      x--;
    }

    // Arrays
    int[] arr = new int[5]; // Declaration and initialization
    arr[0] = 1; // Assigning value
    int[] arr2 = { 1, 2, 3, 4, 5 }; // Initializing with values

    int[][] matrix = { // 2D
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    int[][] matrix2 = new int[3][3];
    matrix2[0][0] = 1;

    int[][] jaggedArray = new int[3][];
    jaggedArray[0] = new int[2];
    jaggedArray[1] = new int[3];

    // Classes use
    Car myCar = new Car("Toyota", 2020);
    myCar.display(); // Output: Car brand: Toyota, Year: 2020

    // Inheritance
    Vehicle v = new Car2();
    v.display(); // Output: Car

    Car2 c = new Car2();
    c.Vehicle_func();

    // try catch
    try {
      int[] array = new int[5];
      System.out.println(array[10]); // IndexOutOfBoundsException
    } catch (Exception e) {
      System.out.println("Exception occurred: " + e);
    }

    // taking input
    Scanner scanner = new Scanner(System.in);

    // // Reading an integer
    // System.out.print("Enter an integer: ");
    // int intValue = scanner.nextInt();
    // System.out.println("You entered: " + intValue);

    // // Reading a double
    // System.out.print("Enter a double: ");
    // double doubleValue = scanner.nextDouble();
    // System.out.println("You entered: " + doubleValue);

    // // Reading a string
    // scanner.nextLine(); // Consume newline left-over
    // System.out.print("Enter a string: ");
    // String strValue = scanner.nextLine();
    // System.out.println("You entered: " + strValue);

    // // Reading a boolean
    // System.out.print("Enter a boolean: ");
    // boolean boolValue = scanner.nextBoolean();
    // System.out.println("You entered: " + boolValue);

    // // multiple values from single line
    // System.out.print("Enter three integers separated by spaces: ");
    // int a = scanner.nextInt();
    // int b = scanner.nextInt();
    // int c = scanner.nextInt();
    // System.out.println("You entered: " + a + ", " + b + ", " + c);

    // taking an array input
    // System.out.print("Enter the size of the array: ");
    // int size = scanner.nextInt();
    // int[] customArr = new int[size];

    // System.out.println("Enter " + size + " integers:");
    // for (int i = 0; i < size; i++) {
    // customArr[i] = scanner.nextInt();
    // }

    // System.out.println("You entered:");
    // for (int num : customArr) {
    // System.out.print(num + " ");
    // }
    // scanner.close();

    // Strings

  }

}

while(1){if(DL_GPIO_readPins(GPIO_PORT_A,KEY_1_PIN)){uint32_key1_pressed_count++;printf("Key 1 pressed: %u times\n",uint32_key1_pressed_count);

DL_GPIO_setPinsCustom(GPIO_PORT_B,BLUE_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,BLUE_LED_PIN);delay_cycles(LED_DELAY);

DL_GPIO_setPinsCustom(GPIO_PORT_B,RED_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,RED_LED_PIN);delay_cycles(LED_DELAY);

DL_GPIO_setPinsCustom(GPIO_PORT_B,GREEN_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,GREEN_LED_PIN);delay_cycles(LED_DELAY);}

if(!DL_GPIO_readPins(GPIO_PORT_B,KEY_2_PIN)){uint32_key2_pressed_count++;printf("Key 2 pressed: %u times\n",uint32_key2_pressed_count);

DL_GPIO_setPinsCustom(GPIO_PORT_B,GREEN_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,GREEN_LED_PIN);delay_cycles(LED_DELAY);

DL_GPIO_setPinsCustom(GPIO_PORT_B,RED_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,RED_LED_PIN);delay_cycles(LED_DELAY);

DL_GPIO_setPinsCustom(GPIO_PORT_B,BLUE_LED_PIN);delay_cycles(LED_DELAY);DL_GPIO_clearPinsCustom(GPIO_PORT_B,BLUE_LED_PIN);delay_cycles(LED_DELAY);}}