#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
		char disc_type[]="lorem ipsum";
		char drive[]="lorem ipsum";
		char path[1035];
		char filename[1035];
		int disc_num;
		printf("Vuoi archiviare un CD, un DVD on un DVD-DL? [CD, DVD, DVD-DL]\t");
		scanf("%s", disc_type);
		printf("Quanti dischi devi salavre? ");
		scanf("%d", &disc_num);
		printf("Quale lettore usare? ");
		scanf("%s", drive);
		printf("Dove salvare le immagini? ");
		scanf("%s", path);
		printf("Che nome dare alle immagini? ");
		scanf("%s", filename);
		printf("\n");
		system("clear");
		printf("Riepilogo:\n");
		printf("Vuoi archiviare un CD, un DVD on un DVD-DL? [CD, DVD, DVD-DL] %s\n", disc_type);
		printf("Quanti dischi devi salavre? %d\n", disc_num);
		printf("Quale lettore usare? %s\n", drive);
		printf("Dove salvare le immagini? %s\n", path);
		printf("Che nome dare alle immagini? %s\n", filename);
		printf("\n");
		printf("Premere CTRL+C per annullare.\n");
		sleep(5);
		printf("Inizio operazione.\n");
		system("clear");
		int i;
		if(strcmp(disc_type, "CD") == 0){
			if(disc_num=!1){
				for(i=1;i<=disc_num;i++){
					char buf[100];
					sprintf(buf, "dd if=%s | pv -s 800M | dd of=%s/%s_CD%d.iso && eject %s" , drive, path, filename, i, drive);
					system(buf);
					system("clear");
					printf("Inserire il disco %d, attendere che sia stato letto e premere Invio\n", i+1);
					getchar();
				}
			}
			else{
				char buf[100];
				sprintf(buf, "dd if=%s | pv -s 800M | dd of=%s/%s.iso && eject %s" , drive, path, filename, drive);
				system(buf);	
			}
		}
		if(strcmp(disc_type, "DVD") == 0){
			if(disc_num=!1){
				for(i=1;i<=disc_num;i++){
					char buf[100];
					sprintf(buf, "dd if=%s | pv -s 4700M | dd of=%s/%s_DVD%d.iso && eject %s" , drive, path, filename, i, drive);
					system(buf);
					system("clear");
					printf("Inserire il disco %d, attendere che sia stato letto e premere Invio\n", i+1);
					getchar();
				}
			}
			else{
				char buf[100];
				sprintf(buf, "dd if=%s | pv -s 4700M | dd of=%s/%s.iso && eject %s" , drive, path, filename, drive);
				system(buf);	
			}
		}
		if(strcmp(disc_type, "DVD-DL") == 0){
			if(disc_num=!1){
				for(i=1;i<=disc_num;i++){
					char buf[100];
					sprintf(buf, "dd if=%s | pv -s 8400M | dd of=%s/%s_DVD%d.iso && eject %s" , drive, path, filename, i, drive);
					system(buf);
					system("clear");
					printf("Inserire il disco %d, attendere che sia stato letto e premere Invio\n", i+1);
					getchar();
				}
			}
			else{
				char buf[100];
				sprintf(buf, "dd if=%s | pv -s 8400M | dd of=%s/%s.iso && eject %s" , drive, path, filename, drive);
				system(buf);	
			}
		}
		return 0;
}