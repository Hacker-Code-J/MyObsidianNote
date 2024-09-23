
### **Key Differences**:

|Feature|`static`|`static const`|
|---|---|---|
|**Mutability**|Mutable, value can change|Immutable, value cannot change after initialization|
|**Memory**|Stored in writable memory|Stored in read-only memory (if supported by architecture)|
|**Scope/Visibility**|File-scope (not visible outside the `.c` file)|File-scope (not visible outside the `.c` file)|
|**Usage**|Suitable for mutable variables that should persist across function calls or be internal to a file|Suitable for constants that are internal to a file and should not be modified|

### **When to Use Each**: