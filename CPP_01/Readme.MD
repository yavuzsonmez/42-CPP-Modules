## CPP_00

---

| Notion | Exemple | Notes | Description |
| ----------- | ----------- | ----------- | ----------- |
| New and Delete | allocation `Sample *p_instance = new Sample()` deallocation `delete  p_instance` | using free and malloc in c++ is possible but not with object oriented approach (it doesn't call the constructor and the destructor of the class) | |
| | for arays `Sample *arr_instance = new Sample[16]` and `delete [] arr_instance` | we cannot pass parameters when we allocate array like this | |