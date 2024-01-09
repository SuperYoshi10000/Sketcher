#include <stdio.h>;

class Sketch {}
class SketchComponent {}
class Point2d : SketchComponent {}
class Line2d : SketchComponent {}
class Circle : SketchComponent {}
class Arc : Circle {}

class Constraint {}

class Constraint2d : Constraint {
    class Coincident : Constraint2d {}
    class Collinear2d : Constraint2d {}
    class Parallel2d : Constraint2d {}
    class Perpendicular2d : Constraint2d {}
    class Tangent2d : Constraint2d {}
    class Fixed2d : Constraint2d {}
    class Horizontal : Constraint2d {}
    class Vertical : Constraint2d {}
    class Concentric : Constraint2d {}
}
class Dimension2d : Constraint2d {
    class DistanceDimension2d : Dimension2d {}
    class AxisDimension2d : Dimension2d {}
    class LengthDimension : Dimension2d {}
    class SizeDimension : Dimension2d {}
    class AngleDimension : Dimension2d {}
}

class Constraint3d : Constraint {
    class Fasten : Constraint3d {}
    class Coplanar : Constraint3d {}
    class Collinear3d : Constraint3d {}
    class Parallel3d : Constraint3d {}
    class Perpendicular3d : Constraint3d {}
    class Tangent3d : Constraint3d {}
    class Fixed3d : Constraint3d {}
    class Horizontal3d : Constraint3d {}
    class Vertical3d : Constraint3d {}
}

class Dimension3d : Constraint3d {
    class DistanceDimension3d : Dimension3d {}
    class AxisDimension3d : Dimension3d {}
    class AngleDimension3d : Dimension3d {}
}
