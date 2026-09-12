# include <stdio.h>

int main(){
	float heartrate,temperature;
	
	printf("Enter the heart rate reading (In BPM):\n");
	scanf("%f",&heartrate);
	
	printf("Enter the body tempereature reading (In Celcius):\n");
	scanf("%f",&temperature);
	
	
	if(heartrate > 120 || temperature > 39) {
		printf("Critical - Immediate Attention\n");
	} else if((heartrate >= 100 && heartrate <= 120) && (temperature >= 37.5 && temperature <= 39)) {
		printf("Urgent\n");
	}else {
		printf("Normal - Wait in Queue\n");
	}
	
	return 0;
}
