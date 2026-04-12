class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        if(a+b<=c || a+c <=b || b+c<=a){ // if 3 side a+b>c then it is tringle  if not then return blank 
            return {};

        }
        double A = acos((b*b+c*c-a*a)/(2*b*c))*180.0 /M_PI;
        double B = acos((a*a+c*c-b*b)/(2*a*c))*180.0 /M_PI; // to find the angle this is the formula 
        double C = acos((b*b+a*a-c*c)/(2*b*a))*180.0 /M_PI; //m_PI is pie of maths 3.14
        // to get in degree we have to divide the angle with pie 
        vector<double>ans={A,B,C};
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};