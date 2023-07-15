class Data{
    private int val=10;
    public void result(){
        System.out.println(val);
    }
    public void update(int input){
        val=input;
    }
}

class Main{
    public static void main(String[] args) {
        Data obj1 = new Data();
        obj1.result();
        Data obj2=obj1;
        obj2.update(12);
        obj1.result();
        System.out.println(obj1==obj2);
    }
}