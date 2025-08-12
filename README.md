
# Car Dealership (University Project)-Spring 2023

A simple C++ console application that models a car dealership inventory system.  
You can add cars, remove cars by their position in the inventory, and display the current list of cars.

---

## Project Structure

- `include/Car.h` — Definition of the Car class  
- `src/Car.cpp` — Implementation of the Car class  
- `include/CarDealership.h` — Definition of the CarDealership class  
- `src/CarDealership.cpp` — Implementation of the CarDealership class  
- `src/main.cpp` — Program entry point  
- `CMakeLists.txt` — Build configuration using CMake

---

## How to Build and Run

### Using CMake (recommended)

```bash
mkdir build
cd build
cmake ..
cmake --build .
./car_dealership        # On Windows use: car_dealership.exe
````

---

### Using g++ directly (if installed)

```bash
g++ -std=c++17 src/*.cpp -I include -o car_dealership
./car_dealership        # On Windows use: car_dealership.exe
```

---

## Example Output

```
Car dealership inventory:
- Ford Mustang 2022: $14500.50
- Chevrolet Camaro 2020: $12500.30
- Toyota FJ Cruiser 2019: $24000.50

Car dealership inventory:
- Ford Mustang 2022: $14500.50
- Toyota FJ Cruiser 2019: $24000.50
```

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Contact

Created by Jessica Dardas
Feel free to open issues or reach out with questions!
