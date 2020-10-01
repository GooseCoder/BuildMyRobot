# Build My World
This example project has a gazebo simulation with a building and vehicle model. Those were used to generate a world file to use in future projects.

## Project Structure

```
├── CMakeLists.txt
├── model
│   ├── Building
│   │   ├── model.config
│   │   └── model.sdf
│   └── WheeledRobot
│       ├── model.config
│       └── model.sdf
├── README.md
├── script
│   └── welcome_message.cpp
└── world
    └── HomeFirstFloor
```

## How to Compile and Run

First create the build folder and compile the source code

```
$ cd /home/workspace/BuildMyWorld
$ mkdir build
$ cd build/
$ cmake ../
$ make # You might get errors if your system is not up to date!
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace BuildMyWorld/build
```

Second open the world folder and open it with Gazebo
```
$ cd /home/workspace/BuildMyWorld/world/
$ gedit myworld
```
