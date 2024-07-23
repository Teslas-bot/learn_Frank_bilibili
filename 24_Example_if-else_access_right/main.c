#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// 为了区分不同的职位，可以定义一个枚举类型
typedef enum {
    Manager,    // 0
    Employee,   // 1
    Intern      // 2
} Role;

// Equivalent to
// #define Manager 0
// #define Employee 1
// #define Intern 2

bool check_access_for_manager();
bool check_access_for_employee(uint8_t completed_tasks);
bool check_access_for_intern(uint8_t completed_tasks, bool is_manager_approved);

int main()
{
    /*
        公司内部权限问题。
        员工可以访问不同的系统资源，这取决于他们的职位和完成数量。权限规则如下：

        1. Manaager 总是可以访问所有资源
        2. Employee 如果完成5个以上的任务以后，则可以访问资源
        3. Intern (实习生) 如果完成10个以上的任务以后，必须经过经理同意才可以访问
    */
    // 身份属性
    Role role = Intern;

    uint8_t completed_tasks = 7;
    
    bool is_manager_approved = false;

    // Plan A
    // if-else
    // 既使用了else if
    // 又嵌套了if
    // 这样不好
    if (role == Manager)
    {
        puts("You have access right. You are manager.");
    }
    else if (role == Employee && completed_tasks > 5)
    {
        puts("You have access right. You are Employee. You have completed 5 tasks.");
    }
    else if (role == Intern && completed_tasks > 10 &&is_manager_approved)
    {
        puts("You have access right. You are Intern. You have completed 10 tasks. You have been allowd to get the access right by manager.");
    }
    else
    {
        puts("You don't have access right.");
    }

    // Plan B
    // Detect whether the access conditions are met
    // 逻辑复杂，降低了代码的可读性
    // 只适用于身份比较少，且有良好的注释
    bool is_access_allowed = (role == Manager) || (role == Employee && completed_tasks > 5) || (role == Intern && completed_tasks > 10 && is_manager_approved);

    if (is_access_allowed)
    {
        puts("You have access right.");
    }
    else
    {
        puts("You don't have access right.");
    }

    // 重置上一个Plan改变的 is_access_allowed 的默认值为 false
    is_access_allowed = false;

    // Plan C
    // switch-case
    switch (role)
    {
        case Manager:
            is_access_allowed = true;
            break;
        
        case Employee:
            if (completed_tasks > 5)
            {
                is_access_allowed = true;
            }
            break;
        case Intern:
            if (completed_tasks > 10 && is_manager_approved)
            {
                is_access_allowed = true;
            }
            break;
        default:
            is_access_allowed = false;
            break; 
    }
    if (is_access_allowed)
    {
        puts("You have access right.");
    }
    else
    {
        puts("You don't have access right.");
    }

    // 重置上一个Plan改变的 is_access_allowed 的默认值为 false
    is_access_allowed = false;

    // Plan D
    // Using function based on Plan C
    switch (role)
    {
        case Manager:
            is_access_allowed = check_access_for_manager();
            break;
        
        case Employee:
                is_access_allowed = check_access_for_employee(completed_tasks);
            break;
        case Intern:
                is_access_allowed = check_access_for_intern(completed_tasks, is_manager_approved);
            break;
        default:
            is_access_allowed = false;
            break; 
    }
    if (is_access_allowed)
    {
        puts("You have access right.");
    }
    else
    {
        puts("You don't have access right.");
    }
}

bool check_access_for_manager()
{
    return true;
}
bool check_access_for_employee(uint8_t completed_tasks)
{
    return completed_tasks > 5;
}
bool check_access_for_intern(uint8_t completed_tasks, bool is_manager_approved)
{
    return completed_tasks > 10 && is_manager_approved;
}