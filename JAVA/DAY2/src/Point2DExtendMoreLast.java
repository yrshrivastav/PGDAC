import java.util.Scanner;
public class Point2DExtendMoreLast {
    
    /*
     *  4.8 (OPTIONAL WORK)
            Find out if the points  are same or different (Hint : isEqual)

            Print the message accordingly. (print SAME or DIFFERENT)
            If points are not same , display distance between 
            these 2 points.
     */
        
        private int x;
        private int y;

        Point2DExtendMoreLast(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(Point2DExtendMoreLast p){
            System.out.println("Show method called by instance of Point2DExtendMoreLast class");
            return "Point X of Point 1 and 2: "+this.x+" "+p.x +"  &&  Point Y Point 1 and 2: "+this.y+" "+p.y;
            
        }
        public String isEqual(Point2DExtendMoreLast p){
            if(this.x==p.x && this.y==p.y){
                return "SAME";
            }            
            else {
                this.calculateDistance(p);
                return "DIFFERENT";

            }
        }
        public void calculateDistance(Point2DExtendMoreLast p){
            System.out.println("Inside calculateDistance method");
            //distance formula sqrt of (x1-x2) ka whole square plus (y1-y2) ka whole square
            System.out.println(Math.sqrt((Math.pow((this.x-p.x), 2)+Math.pow((this.y-p.y), 2))));
        }
}

class Main{
    public static void main(String[] arg){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter coordinates X and Y for two points");
            Point2DExtendMoreLast p = new Point2DExtendMoreLast(sc.nextInt(), sc.nextInt());
            Point2DExtendMoreLast p1 = new Point2DExtendMoreLast(sc.nextInt(), sc.nextInt());
            System.out.println(p.show(p1));
            System.out.println(p.isEqual(p1));
            
    }
}
