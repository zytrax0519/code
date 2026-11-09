package main

import "fmt"

func main() {
	var age int
	fmt.Println("age oruulna uu ")

	fmt.Scanf("%d", &age)

	if age >= 18 {
		fmt.Println("Adult")
	} else if age >= 13 {
		fmt.Println("Teenager")
	} else {
		fmt.Println("Child")
	}
}
