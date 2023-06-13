int CountDigit(int number, int digit) {
    int count = 0;
    if (number < 0) {
    number = -number;
}
    if(number==0) return 1;
    while (number != 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}