import numpy as np

def main():
    num_points = int(input("Enter number of random points: "))
    
    # Generate all random points 
    points = np.random.uniform(-1.0, 1.0, (num_points, 2))
    
    # Calculate distances from origin for all points
    distances = np.sum(points**2, axis=1)
    
    # Count points inside circle
    circle_points = np.sum(distances <= 1)
    
    pi_estimate = 4.0 * (circle_points / num_points)
    
    print(f"Total Points: {num_points}")
    print(f"Points inside circle: {circle_points}")
    print(f"Estimated Pi = {pi_estimate}")

if __name__ == "__main__":
    main()
