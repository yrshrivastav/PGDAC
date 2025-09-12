package com.developers.geometry;


public class Point2D {
   /*
        6. Optional assignment - Do it in IDE

        6.1 Copy  earlier Point2D class .

        6.2    Create a driver / tester   class(for UI)  , in the "tester" package "TestPoints" , with main(..)

            1. Prompt user , how many points to plot?
            Create suitable array. (Hint : array of references)

            2. Show following options

            Options :
            1. Plot a point
            Inputs : array index , x  ,y
            Check boundary conditions  & also check if some point is already plotted at the same index , if not then store the point details.
            In case of any errors , display suitable error message.

            2.   Display x,y co-ordinates of all the points plotted so far ,using for-each loop.

            0. Exit

     */
        private int x;
        private int y;

        public Point2D(int x, int y){
            this.x=x;
            this.y=y;
        }
        public String show(){
//            System.out.println("Show method called by instance of Point2DExtendMoreOnce class");
            return "Point X of Point 1 : "+this.x+"  &&  Point Y Point 1 : "+this.y;
            
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
