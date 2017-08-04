// CAR_SIMULATOR
#include <iostream>
#include "physics.h"

int main() {

  // read in car mass
  std::cout << "Enter the mass of the car (kg): ";
  double mass;
  std::cin >> mass;

  // read in engine force
  std::cout << "Enter the net force of the engine (N): ";
  double force;
  std::cin >> force;

  // read in drag coefficient
  std::cout << "Enter the car's drag coefficient (m): ";
  double drag;
  std::cin >> drag;

  // read in time step
  std::cout << "Enter the simulation time step (s): ";
  double dt;
  std::cin >> dt;

  // read in total simulation time
  std::cout << "Enter the number of time steps (int): ";
  int N;
  std::cin >> N;

  // initialize the car's state
  double x = 0;  // initial position
  double v = 0;  // initial velocity
  double a = 0;  // acceleration
  double t = 0;  // initial time

  // run the simulation
  for (int i=0; i<N; ++i) {

    // COMPUTE UPDATED STATE HERE

    t += dt;  // increment time

    // print the time and current state
    std::cout << "t: " << t << ", a: " << a
              << ", v: " << v << ", x: " << x << std::endl;
  }

  return 0;
}