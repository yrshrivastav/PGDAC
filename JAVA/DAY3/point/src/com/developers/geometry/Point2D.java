package com.developers.geometry;


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
        public String show(Point2D p){
            System.out.println("Show method called by instance of Point2DExtendMoreOnce class");
            return "Point X of Point 1 and 2: "+this.x+" "+p.x +"  &&  Point Y Point 1 and 2: "+this.y+" "+p.y;
            
        }
        public boolean isEqual(){
            if(this.x==this.y){
                return true;
            }            
            else {
                return false;
            }
        }
        public void calculateDistance(Point2D p){
            System.out.println("Inside calculateDistance method");
            //distance formula sqrt of (x1-x2) ka whole square plus (y1-y2) ka whole square
            System.out.println(Math.sqrt((Math.pow((p.x-this.x), 2)+Math.pow((p.y-this.y), 2))));
        }
    

}
