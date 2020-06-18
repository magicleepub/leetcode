case 1, 2, 3이 모두 아닐 경우

// https://leetcode.com/problems/circle-and-rectangle-overlapping/

class Solution
{
public:
  bool check_x_middle(int radius, int x_center, int y_center, int x1, int x2, int y)
  {
    if (x1 <= x_center && x_center <= x2)
      return (y - y_center) * (y - y_center) <= radius * radius;
    return false;
  }
  bool check_x_else(int radius, int x_center, int y_center, int x, int y)
  {
    return (x - x_center) * (x - x_center) + (y - y_center) * (y - y_center) <= radius * radius;
  }

  bool checkOverlap(int radius, int x_center, int y_center, int x1, int x2, int y1, int y2)
  {
    if (x1 <= x_center && x_center <= x2 && y1 <= y_center && y_center <= y2)
      return true;
    if (check_x_middle(radius, x_center, y_center, x1, x2, y1))
      return true;
    if (check_x_middle(radius, x_center, y_center, x1, x2, y2))
      return true;
    if (check_x_middle(radius, y_center, x_center, y1, y2, x1))
      return true;
    if (check_x_middle(radius, y_center, x_center, y1, y2, x2))
      return true;
    if (check_x_else(radius, x_center, y_center, x1, y1))
      return true;
    if (check_x_else(radius, x_center, y_center, x2, y1))
      return true;
    if (check_x_else(radius, x_center, y_center, x1, y2))
      return true;
    if (check_x_else(radius, x_center, y_center, x2, y2))
      return true;
    return false;
  }
};
