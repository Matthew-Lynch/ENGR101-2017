#include <stdio.h>
#include <time.h>
#include "E101.h"

int main()
{
  init();
  int adc_reading0;
  int a = 10; 
  int adc_max = 0;
  int adc_min = 600;
  int adc_tot = 0;
  while(a > 0)  
  {
  adc_reading0 = read_analog(0);
  if (adc_reading0 > adc_max) {
  	 adc_max = adc_reading0;
  	 };
  if (adc_reading0 < adc_min){
	 adc_min = adc_reading0;
      };
      adc_tot = adc_tot + adc_reading0;
  
  a = a-1;
  sleep1(1,0);
  }
  printf("max reading from A0 = %d\n", adc_max);
  printf("min reading from A0 = %d\n", adc_min);
  printf("mean reading from A0 = %d\n", adc_tot/10);
  printf("the half range is : %f\n", (adc_max-adc_min)/2.0);
  sleep1(1,0);
  
    

  return 0;
  
  
}
