#include <cstdio>
using namespace std;

const int maxstring = 1024;
const int repeat = 5;

int main() {
	const char* filename = "MyFile.txt";
	const char* str = "This is literal c-string.\n";
	// Open file in write mode 
	FILE* fp = fopen(filename, "w");
	//Write to the file.
	for(int i = 0; i < repeat; i++)
		fputs(str, fp);
	fclose(fp);

	// Open file in read mode.
	FILE* fr = fopen(filename, "r");
	char buff[maxstring];
	while(fgets(buff, maxstring, fr)) {
		fputs(buff, stdout);
	}
	fclose(fr);

	FILE* file1 = fopen("file1", "w");
	FILE* file2 = fopen("file2", "w");
	rename("file1", "file2");
	remove("file2");
	fclose(file1);
	fclose(file2);


	return 0;
}
