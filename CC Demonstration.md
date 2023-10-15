
# Demonstration Overview
### Topic : Container Orchestration with Kubernetes
___
- **Introduction** - 1 minute
	- Introduce the topic
	- Relevance in modern cloud computing
	- Mention the key points covered later(headings)
- **Kubernetes Overview** - 2 minutes
	- High-level kubernetes explanantion
	- Key components(nodes, pods, services and deployments) explanation
- **Setting up a Kubernetes Cluster** - 2 minutes
	- set up a small kubernetes cluster using google kubernetes engine
- **Deploy an application** - 3 minutes
	- Create a YAML file
	- Use `kubectl`
	- Show how Kubernetes *manages application scaling and load balancing automatically*
		- configure multiple replicas in the YAML file
		- use `kubectl` to view the current status, then simulate increased load using curl, Apache Bench or any script
		- also use `kubectl` to show how the traffic is distributed among the pods
		- as the traffic decreases, kubernetes also scales down automatically
- **Monitor and Scaling** - 3 minutes
	- Demonstrate the built-in monitoring and scaling
	- `kubectl` to view the stats and logs
	- simulate increased load to show automatic pod scaling
- **Service Discovery** - 2 minutes
	- creating a kubernetes service to expose the deployed application to the external web
	- access using service's IP or DNS
- **Update the application** - 1 minute
	- Push a minute update to demonstrate the zero downtime rolling updates
- **Cleaning up(optional)** - 1 minute
	- Explain how to clean up resources and delete the application and cluster