# 🎯 Monte-Carlo-Estimation-of-Pi

This project estimates the value of Pi using a Monte Carlo simulation technique.
Monte Carlo method is a way to solve problems using randomness. Instead of trying to calculate an exact answer with a formula, the idea is to simulate many random samples and use statistics to estimate the result.

You can think of it like this:
If a problem is too complex to solve directly, you run a lot of random experiments and see what the average outcome looks like.

### What is the idea?

We imagine a square and a circle inside it.

- The square has side length 2
- The circle has radius 1
- Both share the same center at (0, 0)

So the circle touches the sides of the square perfectly.

#### Geometry:
Area of square = 2 × 2 = 4  
Area of circle = Pi × r² = Pi × 1² = Pi

Ratio of areas:
(circle area) / (square area) = Pi / 4

### How do we use this to estimate Pi?

We generate random points inside the square.

For each point (x, y):
- If: x² + y² ≤ 1 then the point is inside the circle
- Otherwise it is outside

Then we count:
circle_points = number of points inside the circle  
square_points = total random points generated

Since:
(circle_points / square_points) is almost Pi / 4

We estimate:
Pi ≈ 4 × (circle_points / square_points)

### Why does this work?

Random points spread evenly over time.  
So the fraction of points inside the circle becomes close to the fraction of the areas.

More random points means more accurate Pi.
### 📊 Example Results

| Points  | Estimated π |
|---------|-------------|
| 25      | 2.88       |
| 100     | 2.88       |
| 100000   | 3.14 ✅      |
