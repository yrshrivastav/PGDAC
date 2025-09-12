package com.developer;

public class Box {

    /*
        5. Can you use for-each loop , to double box widths for the boxes having volume < 100 ?
    */

    //state (non static data member : instance vars) - tight encapsulation
    private double width;
    private double depth;
    private double height;

    // parameterized constructor to init complete state
    public Box(double w, double d, double height) {
        this.width = w;
        this.depth = d;
        this.height = height;// this : keyword mandatory
    }

    // add overloaded ctor to create a cube
    public Box(double side) {
        // this.width=depth=height=side;
        /*
         * Instead of repeating the same code , invoke another ctor of the same class -
         * this keyword
         */
        this(side, side, side);// calls the 1st ctor.
    }

    // add overloaded ctor to create a dummy box
    public Box() {
        this(-1);// invokes 2nd ctor
    }

    // add instance method to return box dimensions in string form
    public String getBoxDimensions() {
        return "Box dims are " + this.width + " " + this.depth + " " + this.height;
    }

    // add instance method to return box volume
    public double getVolume() {
        return this.width * this.depth * this.height;
    }

    //getter for dimensions
    public double getWidth(){
        return this.width;
    }
    public double getDepth(){
        return this.depth;
    }
    public double getHeight(){
        return this.height;
    }

    //setter for dimensions
    public void setWidth(double d){
        this.width = d;
    }
    public void setDepth(double d){
        this.depth = d;
    }
    public void setHeight(double d){
        this.height = d;
    }
}