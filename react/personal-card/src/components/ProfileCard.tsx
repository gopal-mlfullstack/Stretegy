import React from "react";

import { MapPin, Briefcase } from "lucide-react";
import { ProfileData } from "../types/profile.types";
import Badge from "./Badge";
import SocialLink from "./SocialLink";

interface ProfileCardProps {
  profile: ProfileData;
}

const ProfileCard: React.FC<ProfileCardProps> = ({ profile }) => {
  return (
    <div className="bg-white rounded-2xl shadow-xl overflow-hidden max-w-md w-full">
      {/* Header section with background Gradient*/}
      <div className="bg-gradient-to-r from-blue-500 to-purple-600 h-32"></div>

      {/* Profile Image - positioned to overlap header*/}
      <div className="relative px-6 pb-6">
        <div className="flex justify-center -mt-16 mb-4"></div>
        <img
          src="profile.imageUrl"
          alt="profile.name"
          className="w-32 h-32 rounded-full border-4 border-white shadow-lg object-cover"
        />
      </div>
    </div>
  );
};
