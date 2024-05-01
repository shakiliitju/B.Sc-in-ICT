package lectureSheet;

class X {

    void method(int num) {
        System.out.println("method : " + num);
    }

    void method(int num1, int num2) {
        System.out.println("method : " + num1 + "," + num2);
    }

    double method(double num) {
        System.out.println("method : " + num);
        return num;
    }
}

class Y {

    public static void main(String[] args) {
        X obj = new X();
        double result;
        obj.method(20);
        obj.method(20, 30);
        result = obj.method(5.5);
        System.out.println("Answer is : " + result);
    }
}



