/******************************************************************************************************
 * Author: Hesandi Samarathunga
 * Project: Lab03
 * Date : 01/01/2026
 *****************************************************************************************************/

/*Hemispheres
▶ Implement a function isNorthernHemisphere() that returns a logical true only if the geo
graphic location passed to the function is on the northern hemisphere
▶ Implement a function isSouthernHemisphere() accordingly.
▶ Write a program that uses some test coordinates to verify the correct return values.*/

#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846

#include <stdio.h>
#include <math.h>

//prototypes
int isNorthernHemisphere(double latitude);
int isSouthernHemisphere(double latitude);
int localDistanceKm(double lat1, double lon1, double lat2, double lon2);
int distanceKm(double lat1, double lon1, double lat2, double lon2);

//main function
int main(void)
{
	double latitude;
	printf("Longitude = -90 - +90 \n");

	printf("Enter the longitude of the location : ");
	scanf("%lf", &latitude);
	/*if (scanf("%lf", &latitude) != 1)
	{
		printf("The location you entered is invalid.........\n");
	}*/

	//function call
	if (isNorthernHemisphere(latitude) == 1)
	{
		printf("Location is in the Nothern Hemisphere\n\n");
	}
	else if (isNorthernHemisphere(latitude) == -1)
	{ 
		printf("Invalid (>90°)\n");
	}
	
	
	if (isSouthernHemisphere(latitude) == 1)
	{
		printf("Location is in the Southern Hemisphere\n\n");
	} 
	else if (isSouthernHemisphere(latitude) == -1)
	{
		printf("Invalid (<-90°)\n");
	}

	
	//function call to check the distance between  the HAW Hamburg and the Eiffel Tower

	double distance = localDistanceKm(53.557078, 10.023109, 48.858363, 2.294481);
	printf("distance between  the HAW Hamburg and the Eiffel Tower : %f\n\n", distance);

	double distance2 = distanceKm(53.557078, 10.023109, 48.858363, 2.294481);
	printf("distance between  the HAW Hamburg and the Eiffel Tower : %f\n\n", distance2);

	getchar();
	return 0;
}

	int isNorthernHemisphere(double latitude)
{
	if (latitude >= 0 && latitude <= 90)
	{
		return 1;
	}
	else if (latitude > 90)
	{
		return -1;
	}
	return 0;
}

int isSouthernHemisphere(double latitude)
{

	if (latitude <= 0 && latitude >= -90)
	{
		return 1;
	}
	else if (latitude < -90)
	{
		return -1;
	}
		return 0;
}

int localDistanceKm(double lat1, double lon1, double lat2, double lon2)
{
	double delta_y = 111.3 * fabs(lat1 - lat2);
	double delta_x = 111.3 * cos((lat1 + lat2) / 2.0) * (lon1 - lon2) * M_PI/180.0;

	double distance = sqrt((delta_x * delta_x) + (delta_y * delta_y));

	printf("\nCalculated Method.....................\n");
	printf("Diatance = sqrt((double)(delta_x * delta_x) + (delta_y * delta_y)\n");

	return distance;
}

int distanceKm(double lat1, double lon1, double lat2, double lon2)
{
	printf("\nCalculated Method.....................\n");
	printf("Distance = 6378.388 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1)\n");

	double lat1_rad = lat1 * M_PI / 180.0;
	double lat2_rad = lat2 * M_PI / 180.0;
	double lon_diff_rad = (lon2 - lon1) * M_PI / 180.0;

	double distance2 = 6378.388 * acos(sin(lat1_rad) * sin(lat2_rad) +
		cos(lat1_rad) * cos(lat2_rad) * cos(lon_diff_rad));
	
	//double distance2 = 6378.388 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));

	return distance2;
}


