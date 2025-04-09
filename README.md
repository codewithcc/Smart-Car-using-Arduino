
# Smart Car using Arduino

![Arduino Smart Car](https://img.shields.io/badge/Project-Smart%20Car-blue) ![Arduino](https://img.shields.io/badge/Platform-Arduino-00979D) ![License](https://img.shields.io/badge/License-MIT-green)

A simple Arduino-based smart car controlled via an L298N motor driver. This project includes functions for moving the car forward, backward, turning left/right, and stopping.

## Hardware Components
- Arduino Board (Uno/Nano)  
- L298N Motor Driver  
- DC Motors (x2)  
- Chassis & Wheels  
- Power Supply (Battery)  

## Pin Configuration
| L298N Pin | Arduino Pin |
|-----------|-------------|
| IN1       | 3           |
| IN2       | 5           |
| IN3       | 6           |
| IN4       | 9           |

## Features
- **Forward Movement**: Moves the car forward by a specified distance (cm).  
- **Backward Movement**: Moves the car backward by a specified distance (cm).  
- **Left/Right Turn**: Rotates the car by a specified angle (degrees).  
- **Stop Function**: Immediately stops all motor movements.  

## Functions
- `stopCar()` – Stops all motors.  
- `forward(d)` – Moves the car forward by distance `d` (cm).  
- `backward(d)` – Moves the car backward by distance `d` (cm).  
- `turnRight(deg)` – Turns the car right by `deg` degrees.  
- `turnLeft(deg)` – Turns the car left by `deg` degrees.  

## Setup & Execution
1. Upload the code to the Arduino board.  
2. The car performs a **360° left turn** once in the `loop()`.  
3. Adjust `dt` (delay time) and `itr` (iteration count) as needed.  

## Formulas Used
- **Forward/Backward Delay**:  
  `delay = (distance / speed) * 1000`  
  (Speed: ~132.8 cm/s forward, ~130.083 cm/s backward)  

- **Turning Delay**:  
  `delay = (degrees / rotation_rate) * 1000`  
  (Rotation Rate: ~395°/s left, ~411°/s right)  

## License
This project is open-source under the **MIT License**.  

---
**Happy Building!** 🚗💨  
