/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    void shun(vector<Employee*> employees,int&count,int&id,queue<int>&data)
    {
        for(int i=0;i<employees.size();i++)
        {
            if(employees[i]->id==id)
            {
                count+=employees[i]->importance;
                if(employees[i]->subordinates.size()>0)
                {
                    vector<int> ad=employees[i]->subordinates;
                    for(int j=0;j<ad.size();j++)
                        data.push(ad[j]);
                }
                if(data.empty())
                    return;
                id=data.front();
                data.pop();
                shun(employees,count,id,data);
                break;
            }
        }
    }
    int getImportance(vector<Employee*> employees, int id) {
        int count=0;
        queue<int> data;
        shun(employees,count,id,data);
        return count;
    }
};
