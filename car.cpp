#include "car.h"
#include <stdbool.h>
const int CAR_PARK_SIZE=6;
struct CarImplementation
{
  enum CarType carType;
  enum Color color;
  bool is_available;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  double speed;
};

struct CarImplementation aixam { AIXAM, RED, true, 45, 16.0, 0.0, 0.0};
struct CarImplementation fiat_mutipla1 { FIAT_MULTIPLA, GREEN, true, 170, 65.0, 0.0, 0.0};
struct CarImplementation fiat_mutipla2 { FIAT_MULTIPLA, BLUE, true, 170, 65.0, 0.0, 0.0};
struct CarImplementation fiat_mutipla3 { FIAT_MULTIPLA, ORANGE, true, 170, 65.0, 0.0, 0.0};
struct CarImplementation jeep1 { JEEP, SILVER, true, 196, 80.0, 0.0, 0.0};
struct CarImplementation jeep2 { JEEP, BLACK, true, 196, 80.0, 0.0, 0.0};


static Car car_park[CAR_PARK_SIZE] = {&aixam,&fiat_mutipla1,&fiat_mutipla2,&fiat_mutipla3,&jeep1,&jeep2};

void init()
{
  for (int i = 0; i < CAR_PARK_SIZE; i++)
  {
    car_park[i]->is_available=true;
    car_park[i]->acceleration_rate=0;
    car_park[i]->speed=0;
  }
}

Car get_car(enum CarType carType)
{
  for (int i = 0; i < CAR_PARK_SIZE; i++)
  {
    if (carType==car_park[i]->carType&&car_park[i]->is_available)
    {
      car_park[i]->is_available=false;
      return car_park[i];
    }
  }
  return 0;
}

enum CarType get_type(Car car)
{
  return car->carType;
}
enum Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}

double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}

void set_acceleration_rate(Car car, double acceleration)
{
  if (acceleration<-8) acceleration=-8;
  else if (car->carType==JEEP && acceleration>3.14) acceleration=3.14;
  else if (car->carType==AIXAM && acceleration>1.0) acceleration=1.0;
  else if (car->carType==FIAT_MULTIPLA && acceleration>2.26) acceleration=2.26;
  car->acceleration_rate=acceleration;
}

int get_speed(Car car)
{
  return car->speed+0.5;
}

void accelerate(Car car)
{
  double velocity = get_acceleration_rate(car) * 3.6;
  if (velocity+get_speed(car)<= car->max_speed)
  {
    car->speed+=velocity;
  }
  else
  {
    car->speed=car->max_speed;
  }
}
