#include <stdio.h>
void decompor(int total_seg, int *horas, int *mins, int *segs)
{
	int segundos_numa_hora= 60*60;
	
	int *seg=&segundos_numa_hora;
	
	*horas= total_seg/(*seg);
	
	*mins=( total_seg % *seg);
	
	*mins=*mins/60;
	
	*segs=
	
}

int main()
{
	int total_seg=5400;
	
	int horas,mins,segs;
	
	decompor(total_seg, &horas, &mins, &segs);
	
	printf("%d= %d:%d:%d\n", total_seg, horas, mins, segs);
	return 0;
}
	
