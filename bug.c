int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d", x); // Output: 20    return 0;}

int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d", x); // Output: 20    int y = 30;    ptr = &y;    *ptr = 40;    printf("%d", x); // Output: 20    printf("%d", y); // Output: 40    return 0;}