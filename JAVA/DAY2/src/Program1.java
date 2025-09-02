import java.lang.Math;
public class Program1 {
    public static void main(String[] args){
        int b1 = 2147483647;
        short s1 = 32767;
        // int s2 = s1+b1;
        // System.out.println("S2 value is: "+s2);
        Math.addExact(b1, s1);
        
    }   
}
