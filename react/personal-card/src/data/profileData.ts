// This file contains the actual profile data
import type { ProfileData } from "../types/profile.types";

export const profileData: ProfileData = {
  name: "Sarah Johnson",
  title: "Full Stack Developer",
  location: "San Francisco",
  bio: "Passionate developer with 5 years of experience building web applications. Love working with React, TypeScript, and Node.js. Always eager to learn new technologies and solve callenging problems.",
  imageUrl:
    "https://images.unsplash.com/photo-1494790108377-be9c29b29330?w=400&h=400&fit=crop",
  skills: ["React", "TypeScript", "Node.js", "Tailwind CSS", "MongoDB"],
  socialLinks: [
    { platform: "GitHub", url: "https://github.com", icon: "github" },
    { platform: "Linkedin", url: "https://linkedin.com", icon: "linkedin" },
    { platform: "X", url: "https://X.com", icon: "github" },
    { platform: "Email", url: "https://gmail.com", icon: "email" },
  ],
};
