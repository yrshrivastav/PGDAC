import java.util.Scanner;

public class Point2DExtend {
    /*
     *  4.3 Add a non static  , isEqual method to Point2D class : boolean returning method : must return true if both points are having same x,y co-ords or false otherwise.
            Hint - Ask yourself - 
            How will you invoke it from the tester ?
     */

        private int x;
        private int y;

        Point2DExtend(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(){
            System.out.println("Show method called by instance of Point2DExtend class");
            return "Point X : "+this.x +" Point Y : "+this.y;
            
        }
        public boolean isEqual(){
            if(this.x==this.y){
                return true;
            }            
            else {
                return false;
            }
        }

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter coordinates X and Y");
            Point2DExtend p = new Point2DExtend(sc.nextInt(), sc.nextInt());
            System.out.println(p.show());
            System.out.println("Both Points are equal : "+p.isEqual());
        }
}
