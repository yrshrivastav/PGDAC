
public class Point2D {
   /*
     * 
        3.1 Modify yesterday's Point2D's assignment 
            Re factor (modify) & add Point2D class under the package - com.developers.geometry
            Add TestPoint class under the package - com.tester


     */
        private int x;
        private int y;

        public Point2D(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(){
            System.out.println("Show method called by instance of Point2D class");
            return "Point X : "+this.x +" Point Y : "+this.y;
            
        }
    

}
