#include "car.h"
#include <stdbool.h>


struct CarImplementation{
  enum Color color;
  enum CarType type;
  bool is_rented;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  int speed;
  double lowest_acceleration_rate;
  double highest_acceleration_rate;
};


struct CarImplementation aixam1={RED, AIXAM, false, 45,16.0,0.0,0,-8.0,1.0};
struct CarImplementation fiat_multipla1={GREEN, FIAT_MULTIPLA, false, 170,65.0,0.0,0,-8.0,2.26};
struct CarImplementation fiat_multipla2={BLUE, FIAT_MULTIPLA, false, 170,65.0,0.0,0,-8.0,2.26};
struct CarImplementation fiat_multipla3={ORANGE, FIAT_MULTIPLA, false, 170,65.0,0.0,0,-8.0,2.26};
struct CarImplementation jeep1={SILVER, JEEP, false, 196,80.0,0.0,0,-8.0,3.14};
struct CarImplementation jeep2={BLACK, JEEP, false, 196,80.0,0.0,0,-8.0,3.14};

Car car_park[]={&aixam1,&fiat_multipla1,&fiat_multipla2,&fiat_multipla3,&jeep1,&jeep2};

Car get_car(enum CarType type)
{
  for (int i = 0; i < 6; i++) {
    if ((type == car_park[i]->CarImplementation->type)&&(car_park[i].)) {
      CarImplementation->is_rented = true;
      return
    }
  }
}
enum CarType get_type(Car car)
{
  return AIXAM;
}
enum Color get_color(Car car)
{
  return RED;
}
double get_fill_level(Car car)
{
  return 0;
}
double get_acceleration_rate(Car car)
{
  return 0;
}
int get_speed(Car car)
{
  return 0;
}
void accelerate(Car car)
{

}
void init()
{

}
void set_acceleration_rate(Car car,double acceleration)
{

}
