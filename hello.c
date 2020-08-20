/**
 * Author : Changsu Kim
 *
 * 2020 / 08 / 18
 *
 * This is testing for TA job
 */

 #include <stdlib.h>
 #include <stdio.h>

#define KMS_PER_MILE 1.60934

 int main(int argc, char **argv){
     double miles, kms;

     printf("Please enter miles: ");
     scanf("%lf", &miles);

     kms = KMS_PER_MILE * miles;

     printf("%f miles is equal to %f kilometers\n", miles, kms);

     return 0;
 }