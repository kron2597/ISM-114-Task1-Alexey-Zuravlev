#include <cstdlib>//для system pause
#include <iostream>//заголовочный файл для операций ввода-вывода
using namespace std;//стандартное пространство имен
float countPerimeter(float a, float b, float c){//функция принимает в качестве аргументов три числа типа float - дробных
    float res = a+b+c;//периметр - сумма длин сторон
    return res;//возвращаем результат типа float
}
bool isCorrect(float a, float b, float c){//проверяем треугольник на корректность
    if(a<=0||(b<=0||c<=0))
        return false;//если стороны нулевые или отрицательные - это не треугольник
    if(a>=b+c||(b>=a+c||c>=a+b))
        return false;//если не соблюдается неравенство треугольника
    return true;// во всех других случаях - это треугольник
}
int main() {//главная функция, точка входа в программу
    setlocale(LC_ALL,"Russian");//русский в консоли
    bool isTr=false;//это треугольник?
    float a,b,c;
    while(!isTr){//пока не введем все правильно
    cout<<"введите три стороны треугольника: "<<endl;
    
    cin>>a>>b>>c;//вводим стороны
        isTr = isCorrect(a, b, c);//проверка
    }
    float p = countPerimeter(a, b, c);//периметр
    cout<<"p="<<p<<endl;
    system("pause");//чтобы консоль сразу не закрылась
    return 0;//возврат из фунции
}
