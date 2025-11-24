// Main profile card component

import React from "react";
import { MapPin, Briefcase } from "lucide-react";
import type { ProfileData } from "../types/profile.types";
import Badge from "./Badge";
import SocialLink from "./SocialLink";

interface ProfileCardProps {
  profile: ProfileData;
}

const ProfileCard: React.FC<ProfileCardProps> = ({ profile }) => {
  return (
    <div className="bg-white rounded-2xl shadow-xl overflow-hidden max-w-md w-full">
      {/* Header Section with Background Gradient */}
      <div className="bg-gradient-to-r from-blue-500 to-purple-600 h-32"></div>

      {/* Profile Image - positioned to overlap header */}
      <div className="relative px-6 pb-6">
        <div className="flex justify-center -mt-16 mb-4">
          <img
            src={profile.imageUrl}
            alt={profile.name}
            className="w-32 h-32 rounded-full border-4 border-white shadow-lg object-cover"
          />
        </div>

        {/* Name and Title */}
        <div className="text-center mb-4">
          <h2 className="text-2xl font-bold text-gray-800 mb-1">
            {profile.name}
          </h2>
          <div className="flex items-center justify-center gap-1 text-gray-600 mb-2">
            <Briefcase size={16} />
            <p className="text-sm">{profile.title}</p>
          </div>
          <div className="flex items-center justify-center gap-1 text-gray-500">
            <MapPin size={16} />
            <p className="text-sm">{profile.location}</p>
          </div>
        </div>

        {/* Bio Section */}
        <div className="mb-6">
          <p className="text-gray-600 text-sm leading-relaxed text-center">
            {profile.bio}
          </p>
        </div>

        {/* Skills Section */}
        <div className="mb-6">
          <h3 className="text-sm font-semibold text-gray-700 mb-3">Skills</h3>
          <div className="flex flex-wrap gap-2">
            {profile.skills.map((skill, index) => (
              <Badge key={index} text={skill} />
            ))}
          </div>
        </div>

        {/* Social Links Section */}
        <div>
          <h3 className="text-sm font-semibold text-gray-700 mb-3">Connect</h3>
          <div className="flex justify-center gap-3">
            {profile.socialLinks.map((link, index) => (
              <SocialLink
                key={index}
                platform={link.platform}
                url={link.url}
                icon={link.icon}
              />
            ))}
          </div>
        </div>
      </div>
    </div>
  );
};

export default ProfileCard;
