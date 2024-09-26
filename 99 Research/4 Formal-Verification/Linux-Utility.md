#research 

# Process
Increase the Process's Priority (CPU-bound)
```bash
sudo renice -n -10 -p <PID>
```

Force a Core Dump and Analyze Memory
```bash
sudo gcore <PID>
```

Monitor and Track Memory Usage
```bash
top -p <PID>
```

```bash
ps -p <PID> -o %mem,rss,vsz
```



