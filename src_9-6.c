#include<stdio.h>

typedef char String[1024];
typedef int Directory(businessCard* X);
typedef int Directory(businessCard* Y);

typedef struct {                       /*構造体の宣言*/

	String name;
	int age;
	String phone;
	String mailAdres;

}businessCard;

int main(void) {

	/*変数の宣言*/
	businessCard teacher = {
		"担任",30,"xxx-xxx-xxxx","xxxx@co.jp"
	};

	businessCard friend = {
		"田中太郎",15,"yyy-yyy-yyyy","yyyy@co.jp"
	};

	/*関数の引数にteacherのｱﾄﾞﾚｽを渡す*/
	Directory(&teacher);

	/*関数の引数にfriendのｱﾄﾞﾚｽを渡す*/
	Directory(&friend);

	return 0;
}

int Directory(businessCard* X) {

	printf("役職：%s / (年齢：%d)\n", X->name, X->age);

	return;

}

int Directory(businessCard* Y) {
	printf("名前：%s / (年齢：%d)\n", Y->name, Y->age);

	return;
}