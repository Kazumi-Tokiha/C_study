#include<stdio.h>

typedef char String[1024];
typedef int Directory(businessCard* X);
typedef int Directory(businessCard* Y);

typedef struct {                       /*\‘¢‘Ì‚ÌéŒ¾*/

	String name;
	int age;
	String phone;
	String mailAdres;

}businessCard;

int main(void) {

	/*•Ï”‚ÌéŒ¾*/
	businessCard teacher = {
		"’S”C",30,"xxx-xxx-xxxx","xxxx@co.jp"
	};

	businessCard friend = {
		"“c’†‘¾˜Y",15,"yyy-yyy-yyyy","yyyy@co.jp"
	};

	/*ŠÖ”‚Ìˆø”‚Éteacher‚Ì±ÄŞÚ½‚ğ“n‚·*/
	Directory(&teacher);

	/*ŠÖ”‚Ìˆø”‚Éfriend‚Ì±ÄŞÚ½‚ğ“n‚·*/
	Directory(&friend);

	return 0;
}

void Directory(businessCard* X) {

	printf("–ğEF%s / (”N—î%d)\n", X->name, X->age);

	return;

}

void Directory(businessCard* Y) {
	printf("–¼‘OF%s / (”N—î%d)\n", Y->name, Y->age);

	return;
}