extern int count; //main.c의 전역변수 count 공유
extern int total; //input.c의 전역변수 total 공유(input파일에서 선언 및 초기화했으므로)

double average()
{
	return total/(double)count;
}