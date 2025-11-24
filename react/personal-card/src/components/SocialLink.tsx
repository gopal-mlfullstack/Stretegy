import React from "react";
import { Mail, Github, Linkedin, X } from "lucide-react";

interface SocialLinkProps {
  platform: string;
  url: string;
  icon: "github" | "linkedin" | "x" | "email";
}

const SocialLink: React.FC<SocialLinkProps> = ({ platform, url, icon }) => {
  // Map icon names to actual icon components
  const iconMap = {
    github: Github,
    linkedin: Linkedin,
    x: X,
    email: Mail,
  };

  const IconComponent = iconMap[icon];

  return (
    <a
      href={url}
      target="_blank"
      rel="noopener noreferrer"
      className="flex items-center justify-center w-10 h-10 bg-gray-100 rounded-full hover:text-white transition-all duration-300 transform hover:scale-110"
      title={platform}
    >
      <IconComponent size={20} />
    </a>
  );
};

export default SocialLink;
