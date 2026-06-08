def closest_pair(points):
    if len(points) < 2:
        raise ValueError("Потрібно хоча б дві точки")
    
    min_dist = float('inf')
    pair = ()
    
    for i in range(len(points)):
        for j in range(i + 1, len(points)):
            x1, y1 = points[i]
            x2, y2 = points[j]
            dist = ((x2 - x1)**2 + (y2 - y1)**2)**0.5
            if dist < min_dist:
                min_dist = dist
                pair = (points[i], points[j])
                
    return pair[0], pair[1], min_dist

def centroid(points):
    if not points:
        raise ValueError("Список точок порожній")
        
    n = len(points)
    sum_x = sum(p[0] for p in points)
    sum_y = sum(p[1] for p in points)
    
    return (sum_x / n, sum_y / n)

points1 = ((0, 0), (1, 1), (3, 4), (1, 0))
p1, p2, dist = closest_pair(points1)
print(f"Найближчі точки: {p1} та {p2}, відстань: {dist:.2f}")
print(f"Центроїд: {centroid(points1)}")

print("-" * 30)
points2 = ((10, 10), (10, 11), (-5, -5), (10, 10.5))
p1_2, p2_2, dist_2 = closest_pair(points2)
print(f"Найближчі: {p1_2} та {p2_2}, відстань: {dist_2:.2f}")
print(f"Центроїд: {centroid(points2)}")

print("-" * 30)
try:
    closest_pair(((1, 1),))
except ValueError as e:
    print(f"Помилка: {e}")